#pragma once
#include <discord.hpp>
#include <memory>
#include <vector>
#include <string>

namespace discord {
    struct Context {
        Context(const discord::Bot*, discord::Message const&, std::vector<std::string> const&, std::function<void(Context const&)> const&, std::string const&);
        const discord::Bot* bot;
        const discord::Message& message;
        const std::vector<std::string>& arguments;
        const std::function<void(Context const&)> command;
        const std::string command_name;
        const std::shared_ptr<discord::Member> author;
        const std::shared_ptr<discord::Channel> channel;

        template <typename... Tys>
        pplx::task<discord::Message> send(Tys&&... args) const;
    };
};  // namespace discord
