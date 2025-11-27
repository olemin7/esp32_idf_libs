#pragma once
#include <functional>
#include <chrono>
namespace sntp
{
    using time_synk_cb_t = std::function<void(const std::chrono::milliseconds current)>;
    void init(time_synk_cb_t &&onsync_cb);
    void start();
}
