//#include<iostream>
//using namespace std;
//string zodiacsign(int day, string month)
//{
//    string zodiac;
//    if (month == "april")
//    {
//        if (day <= 19)
//        {
//            zodiac = "Aries";
//        }
//        if (day >= 20)
//        {
//            zodiac = "Taurus";
//        }
//    }
//    if (month == "march")
//    {
//        if (day >= 20)
//        {
//            zodiac = "Pisces";
//        }
//        if (day <= 21)
//        {
//            zodiac = "Aries";
//        }
//    }
//    if (month == "may")
//    {
//        if (day <= 21)
//        {
//            zodiac = "Gemini";
//        }
//        if (day >= 20)
//        {
//            zodiac = "Taurus";
//        }
//    }
//    if (month == "june")
//    {
//        if (day <= 20)
//        {
//            zodiac = "Gemini";
//        }
//        if (day >= 21)
//        {
//            zodiac = "Cancer";
//        }
//    }
//    if (month == "july")
//    {
//        if (day <= 22)
//        {
//            zodiac = "Cancer";
//        }
//        if (day >= 23)
//        {
//            zodiac = "Leo";
//        }
//    }
//    if (month == "august")
//    {
//        if (day <= 22)
//        {
//            zodiac = "Leo";
//        }
//        if (day >= 23)
//        {
//            zodiac = "Virgo";
//        }
//    }
//    if (month == "september")
//    {
//        if (day <= 22)
//        {
//            zodiac = "Virgo";
//        }
//        if (day >= 23)
//        {
//            zodiac = "Libra";
//        }
//    }
//    if (month == "october")
//    {
//        if (day <= 22)
//        {
//            zodiac = "Libra";
//        }
//        if (day >= 23)
//        {
//            zodiac = "Scorpio";
//        }
//    }
//    if (month == "november")
//    {
//        if (day <= 21)
//        {
//            zodiac = "Scorpio";
//        }
//        if (day >= 22)
//        {
//            zodiac = "Sagittarius";
//        }
//    }
//    if (month == "december")
//    {
//        if (day <= 21)
//        {
//            zodiac = "Sagittarius";
//        }
//        if (day >= 22)
//        {
//            zodiac = "Capricorn";
//        }
//    }
//    if (month == "january")
//    {
//        if (day <= 19)
//        {
//            zodiac = "Capricorn";
//        }
//        if (day >= 20)
//        {
//            zodiac = "Aquarius";
//        }
//    }
//    if (month == "february")
//    {
//        if (day <= 18)
//        {
//            zodiac = "Aquarius";
//        }
//        if (day >= 19)
//        {
//            zodiac = "Pisces";
//        }
//    }
//
//
//    return zodiac;
//}
//int main()
//{
//    int day;
//    string month, result;
//    cout << "Enter date: ";
//    cin >> day;
//    cout << "Enter month: ";
//    cin >> month;
//    result = zodiacsign(day, month);
//    cout << result << endl;
//    return 0;
//}