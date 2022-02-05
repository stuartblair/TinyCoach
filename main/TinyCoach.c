#include <stdio.h>
#include <mpu6050.h>

static void print_banner(const char* text);

void app_main(void)
{
    print_banner("Hello, I'm your TinyCoach");
}

static void print_banner(const char* text)
{
    printf("\n#### %s #####\n\n", text);
}
