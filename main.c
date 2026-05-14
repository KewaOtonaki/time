#include <stdio.h>
#include <time.h>

int main(void) {
    time_t now;
    struct tm local;

    // 現在時刻を取得
    time(&now);

    // ローカル時刻へ変換
    localtime_s(&local, &now);

    // 表示
    printf("%04d-%02d-%02d %02d:%02d:%02d\n",
           local.tm_year + 1900,
           local.tm_mon + 1,
           local.tm_mday,
           local.tm_hour,
           local.tm_min,
           local.tm_sec);

    return 0;
}
