import java.time.LocalDate;

class Result {

    /*
     * Complete the 'findDay' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER month
     *  2. INTEGER day
     *  3. INTEGER year
     */

    public static String findDay(int month, int day, int year) 
    {
        int dd=Integer.valueOf(day);
        int mm=Integer.valueOf(month);
        int yy=Integer.valueOf(year);
        LocalDate date=LocalDate.of(yy,mm,dd);
        return date.getDayOfWeek().toString();
    }

}

