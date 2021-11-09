#include <iostream>
using namespace std;
class FRACTION
{
    int num_207,d_207;
    public:
    void input(int a, int b)
    {
        num_207 = a;
        d_207 = b;
    }
    void display()
    {
        cout << num_207 << "/" << d_207 << endl;
    }
    void sim(FRACTION *obj);
    FRACTION add(FRACTION obj1, FRACTION obj2);
    FRACTION sub(FRACTION &obj1, FRACTION &obj2);
    FRACTION multi(FRACTION *obj1, FRACTION *obj2);
};
void FRACTION :: sim(FRACTION *obj)
{
    int n = obj->num_207 > obj->d_207 ? obj->d_207 : obj->num_207;
    int i = 1, div = 1;
    while(i <= n)
    {
        if(obj->num_207 % i == 0 && obj->d_207 % i == 0)
        {
            div = i;
        }
        i++;
    }
    obj->num_207 /= div;
    obj->d_207 /= div;
}
FRACTION FRACTION ::add(FRACTION obj1, FRACTION obj2)
{
    FRACTION t;
    t.num_207 = (obj1.num_207 * obj2.d_207) + (obj1.d_207 * obj2.num_207);
    t.d_207 = obj1.d_207 * obj2.d_207;
    sim(&t);
    return t;
}
FRACTION FRACTION :: sub(FRACTION &obj1, FRACTION &obj2)
{
    FRACTION t;
    t.num_207 = (obj1.num_207 * obj2.d_207) - (obj1.d_207 * obj2.num_207);
    t.d_207 = obj1.d_207 * obj2.d_207;
    sim(&t);
    return t;
}
FRACTION FRACTION :: multi(FRACTION *obj1, FRACTION *obj2)
{
    FRACTION t;
    t.num_207 = obj1->num_207 * obj2->num_207;
    t.d_207 = obj1->d_207 * obj2->d_207;
    sim(&t);
    return t;
}
int main()
{
    FRACTION obj1, obj2, obj3, obj4, obj5;
    obj1.input(7, 4);
    obj2.input(10, 3);
    obj3 = obj3.add(obj1, obj2);
    obj3.display();
    obj4 = obj4.sub(obj1, obj2);
    obj4.display();
    obj5 = obj5.multi(&obj1, &obj2);
    obj5.display();
    return 0;
}

