#pragma once 
#include <unordered_map>

const inline std::unordered_map<std::string, int> event_m{
    {"READY", 0},
    {"ERROR", 1},
    {"GUILD_STATUS", 2},
    {"GUILD_CREATE", 3},
    {"CHANNEL_CREATE", 4},
    {"VOICE_CHANNEL_SELECT", 5},
    {"VOICE_STATE_CREATE", 6},
    {"VOICE_STATE_UPDATE", 7},
    {"VOICE_STATE_DELETE", 8},
    {"VOICE_SETTINGS_UPDATE", 9},
    {"VOICE_CONNECTION_STATUS", 10},
    {"SPEAKING_START", 11},
    {"SPEAKING_STOP", 12},
    {"MESSAGE_CREATE", 13},
    {"MESSAGE_UPDATE", 14},
    {"MESSAGE_DELETE", 15},
    {"NOTIFICATION_CREATE", 16},
    {"CAPTURE_SHORTCUT_CHANGE", 17},
    {"ACTIVITY_JOIN", 18},
    {"ACTIVITY_SPECTATE", 19},
    {"ACTIVITY_JOIN_REQUEST", 20},
};

enum EVENTS : int{
    READY,
    ERROR,
    GUILD_STATUS,
    GUILD_CREATE,
    CHANNEL_CREATE,
    VOICE_CHANNEL_SELECT,
    VOICE_STATE_CREATE,
    VOICE_STATE_UPDATE,
    VOICE_STATE_DELETE,
    VOICE_SETTINGS_UPDATE,
    VOICE_CONNECTION_STATUS0,
    SPEAKING_START1,
    SPEAKING_STOP2,
    MESSAGE_CREATE3,
    MESSAGE_UPDATE4,
    MESSAGE_DELETE5,
    NOTIFICATION_CREATE6,
    CAPTURE_SHORTCUT_CHANGE7,
    ACTIVITY_JOIN8,
    ACTIVITY_SPECTATE9,
    ACTIVITY_JOIN_REQUEST0,
};

