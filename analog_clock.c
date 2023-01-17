#include <stdio.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

struct d
{
    char day[4];
    char month[4];
    char date[3];
    char time[9];
    struct t
    {
        int hr, min, sec;
    } timeData;
    char year[5];
} data;

int main()
{
    time_t now = time(0);
    char *time_str;
    char temp[8];
    int i, flag = 0;
    while (1)
    {
        now = time(0);
        time_str = ctime(&now);
        time_str[strlen(time_str) - 1] = '\0';

        for (i = 0; i < strlen(time_str); i++)
        {
            if (i >= 20)
            {
                if (*(time_str + i) == ' ')
                    data.year[i - 20] = '\0';
                else
                    data.year[i - 20] = *(time_str + i);
            }
            else if (i >= 11)
            {
                if (*(time_str + i) == ' ')
                    data.time[i - 11] = '\0';
                else
                    data.time[i - 11] = *(time_str + i);
            }
            else if (i >= 8)
            {
                if (*(time_str + i) == ' ')
                    data.date[i - 8] = '\0';
                else
                    data.date[i - 8] = *(time_str + i);
            }
            else if (i >= 4)
            {
                if (*(time_str + i) == ' ')
                    data.month[i - 4] = '\0';
                else
                    data.month[i - 4] = *(time_str + i);
            }
            else if (i >= 0)
            {
                if (*(time_str + i) == ' ')
                    data.day[i] = '\0';
                else
                    data.day[i] = *(time_str + i);
            }
        }

        for (int i = 1; i <= strlen(data.time); i++)
        {
            if (data.time[i - 1] == ':')
            {
                temp[2] = '\0';
                i == 3 ? (data.timeData.hr = atoi(temp)) : (data.timeData.min = atoi(temp));
            }
            else if (i >= 4 && i <= 5)
            {
                i % 2 ? (temp[1] = data.time[i - 1]) : (temp[0] = data.time[i - 1]);
            }
            else
                i % 2 ? (temp[0] = data.time[i - 1]) : (temp[1] = data.time[i - 1]);
        }
        temp[2] = '\0';
        data.timeData.sec = atoi(temp);

        system("cls");
        if ((atoi(data.date) >= 4 && atoi(data.date) <= 20) || atoi(data.date) % 10 > 3)
            strcpy(temp, "th");
        else if (atoi(data.date) % 10 == 3)
            strcpy(temp, "rd");
        else if (atoi(data.date) % 10 == 2)
            strcpy(temp, "nd");
        else if (atoi(data.date) % 10 == 1)
            strcpy(temp, "st");
        if (data.timeData.hr > 12)
        {
            flag = 1;
            data.timeData.hr -= 12;
        }
        printf("%s%s %s, %s. (%s%s)", data.date, temp, data.month, data.year, data.time, flag ? "pm" : "am");

        Sleep(1000);
    }

    return 0;
}
