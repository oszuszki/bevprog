#include "std_lib_facilities.h"

int main()
{
    int y = 0;
  try
  {
    //1:
    cout << " Success!\n";

    //2:
    cout << " Success!\n";

    //3:
    cout << " Success" << "!\n";

    //4:
    cout << " Success!" << '\n';

    //5:
    int res = 7; 
    vector<int>v(10);
    v[5] = res;
    cout << " Success!\n";

    //6:
    vector<int>v2(10);
    v2[5] = 7;
    if (v2[5]=7)
    cout << " Success!\n";

    //7:
    bool cond = 1;
    if (cond)
    cout << " Success!\n";
    else cout << " Fail!\n";

    //8:
    bool c = true;
    if (c) cout << " Success!\n";
    else cout << " Fail!\n";

    //9:
    string s = "ape";
    bool c2 = "fool"<s;
    if (!c2) cout <<" Success!\n";

    //10:
    string s1 = "ape";
    if (s1 == "ape")
    cout << " Success!\n";

    //11:
    string s2 = "fool";
    if (s2=="fool")
    cout << " Success!\n";

    //12:
    bool s3 = "ape";
    if (s3+"fool")
    cout << " Success!\n";

    //13:
    vector<char>v3(5);
    for (int i = 4; i < v3.size(); ++i );
    cout << " Success!\n";

    //14:
    vector<char>v4(5);
    for (int i = 4; i < v4.size(); ++i) 
    cout << " Success!\n";

    //15:
    string s4 = "Success!\n";
    cout << " ";
    for (int i = 0; i < 10; ++i)
    cout << s4[i];

    //16:
    if (true)
    cout << " Success!\n";
    else cout << "Fail!\n";

    //17:
    string x1 = "2000";
    string c3 = x1;
    if (c3 == "2000")
    cout << " Success!\n";

    //18:
    string s5 = "Success!\n";
    cout << " ";
    for (int i = 0; i < 10; ++i)
    cout << s5[i];

    //19:
    vector<int>v5(5);
    for (int i = 5; i <= v5.size(); ++i)
    cout << " Success!\n";

    //20:
    int i = 0;
    int j = 9;
    while(i<10) ++i;
    if (j<i)
    cout << " Success!\n";

    //21:
    int x3 = 2;
    double d = 5/(x3-2);
    if(d!=2*x3+0.5)
    cout << " Success!\n";

    //22:
    string s9 = "Success!\n";
    cout << " ";
    for (int i9 = 0; i9 <= 10; ++i9)
    cout << s9[i9];

    //23:
    int j2 = 0;
    int i2 = 0;
    while(j2<10) ++j2; if(j2>i2)
    cout << " Success!\n";

    //24:
    int x2 = 4;
    double d2 = 5/(x2-2);
    if(d2 = 2*x2+0.5)
    cout << " Success!\n";

    //25:
    cout << " Success!\n";

    keep_window_open();
    return 0;
  }
  catch(exception& e)
  {
    cerr << "error: " << e.what() << "\n";
    keep_window_open();
  }
  catch(...)
  {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
  }
}
