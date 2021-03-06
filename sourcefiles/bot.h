#include <list>
#include <array>
#include <sstream>

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"

#include "nlohmann/json.hpp"

using namespace nlohmann;

class Bot {
public:
    Bot(const std::string& token, const std::string prefix)
        : prefix{prefix}
    {
        curlpp::Cleanup cleaner;
        curlpp::Easy request;
        request.setOpt(new curlpp::options::Url(auth_url));
        std::list<std::string> headers = {
            "Authorization: Bot " + token
        };
        request.setOpt(new curlpp::options::HttpHeader(headers));
        json j;
        std::stringstream s;
        s << request;
        j << s;
        authenticated = initialize_variables(j);
    }

private:
    bool initialize_variables(const json& j){
        if (j.contains("message")){
            error_message = j["message"];
            return false;
        }
        std::string temp_id = j["id"];
        std::string temp_discrim = j["discriminator"];
        id = std::stol(temp_id);
        discriminator = std::stoi(temp_discrim);
        flags = j["flags"];
        verified = j["verified"];
        mfa_enabled = j["mfa_enabled"];
        bot = j["bot"];
        username = j["username"];
        locale = j["locale"];
        avatar = j["avatar"];
        email = j["avatar"];
        return true;
    }


public:
    bool authenticated;
    std::string error_message;

    int flags;
    long id;
    int discriminator;
    bool bot;
    bool verified;
    bool mfa_enabled;
    std::string email;
    std::string avatar;
    std::string locale;
    std::string username;

    std::string prefix;
private:
    std::string token;
    std::string auth_url = "https://discordapp.com/api/v6/users/@me";
};