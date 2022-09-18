namespace DS{

struct dempster_shafer
{
    /* data */
    int x;
    int y;
    int sum;

    int add(int num1, int num2);

    // int add()
    // {
    //     sum = x + y;
    //     return sum;
    // }

    // constructor
    dempster_shafer() : x(0), y(0), sum(0)
    {
      // do nothing
    }

};

}