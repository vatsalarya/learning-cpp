#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="ejiufgbok";
    string *ptr=&s;


    cout<<ptr<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    char a='a';
    ptr=&a;
    // char **s=&ptr;
    // char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // int a=0;

    cout<<ptr<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    char a='3';
    ptr=&a;
    char **s=&ptr;
    // int a=0;

    cout<<s<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    int a=0;
    ptr=&a;
    char Str[]="zxcvbn";
    ptr=Str;
    ptr+=5;
    cout<<ptr;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    char Str[]="zxcvbn";
    ptr=Str;
    ptr+=5;
    cout<<ptr;
    return 0;
}

int main()
{
    int *ptr, a=10;
    ptr=&a;
    *ptr+=1;
    cout<<(13&25);
    // cout<<"Hello World";
// ANSWER-9
    return 0;
}

//#WTF
#include <iostream>

using namespace std;
class A{
    int a;
    public:
    A(){
        cout<<"A";
    }
};
class B{
    A a;
    public:
    B(){
        cout<<"B";
    }
    static A get(){
        return a;
    }
};

A B::a;
int main()
{
    B b;
    A a1 = b.get();
    
}

#include <iostream>
using namespace std;
class a{
    int id;
    static int count;
    public:
    a(){
        count++;
        id=count;
        cout<<"const"<<id<<endl;
    }
    void add(){
        count++;
        cout<<count;
    }
    ~a(){
        cout<<"dest"<<id<<endl;
    }
};
int a::count=0;
int main()
{
    a b[3];

    return 0;
}
