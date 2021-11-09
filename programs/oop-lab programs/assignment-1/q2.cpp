#include <iostream>
using namespace std;
class vector3d
{
    int x, y, z;
    public:
    void create(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void modify();
    void multiplygiven();
    void multiplyall();
    void display();
    void divide();
    void add();
};

void vector3d::modify()
{
    char ch;
    int n;
    cout << "Enter the coordinate you want to modify: ";
    cin >> ch;
    cout << "Enter the value: ";
    cin >> n;
    switch (ch)
    {
    case 'x':
        x = n;
        break;
    case 'y':
        y = n;
        break;
    case 'z':
        z = n;
        break;
    default:
        cout << "Invalid input!\n";
        break;
    }
}

void vector3d::multiplygiven()
{
    char ch;
    int n;
    cout << "Enter the coordinate to which you want to multiply: ";
    cin >> ch;
    cout << "Enter the value: ";
    cin >> n;
    if (ch == 'x')
        x *= n;
    else if (ch == 'y')
        y *= n;
    else
        z *= n;
}

void vector3d::multiplyall()
{
    int n;
    cout << "Enter the number you want to multiply: ";
    cin >> n;
    x *= n;
    y *= n;
    z *= n;
}

void vector3d::divide()
{
    int n;
    cout << "Enter the number you want to divide: ";
    cin >> n;
    x /= n;
    y /= n;
    z /= n;
}

void vector3d::add()
{
    int n;
    cout << "Enter the number you want to add: ";
    cin >> n;
    x += n;
    y += n;
    z += n;
}

void vector3d::display()
{
    cout << "P(" << x << ", " << y << ", " << z << ")" << endl;
}

int main()
{
    vector3d no_207;
    int x_207, y_207, z_207, n_207;
    char ch_207;
    cout << "Enter the coordinates of vector : \n";
    cout << "x: ";
    cin >> x_207;
    cout << "y: ";
    cin >> y_207;
    cout << "z: ";
    cin >> z_207;
    no_207.create(x_207, y_207, z_207);
    no_207.modify();
    no_207.display();
    no_207.multiplygiven();
    no_207.display();
    no_207.multiplyall();
    no_207.display();
    no_207.divide();
    no_207.display();
    no_207.add();
    no_207.display();
    return 0;
}
