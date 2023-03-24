/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, day_of_year = 0, days_left;

    // Check for leap year and adjust days in February accordingly
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        days_in_month[2] = 29;
    }

    // Calculate day of year
    for (i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;

    // Calculate days left in year
    days_left = (days_in_month[month] - day) + 1;
    for (i = month + 1; i <= 12; i++)
    {
        days_left += days_in_month[i];
    }

    // Print results
    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", days_left);
}
