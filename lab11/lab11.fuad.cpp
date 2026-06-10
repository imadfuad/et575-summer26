/*
md imad fuad
June 9, 2026
lab 11, do-while loop, nested loop
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- example 1: do-while ----"<<endl;
    // do block --> check if a number is even or odd
    // while block --> will run if the user types 'y' 'Y'
    int num;
    char choice;

    do{
        cout<<"Enter a number: ";
        cin>>num;

        if(num%2==0 && num != 0){
            cout<<"Even number"<<endl;
        }
        else if(num == 0){
            cout<<"Number is zero"<<endl;
        }
        else{
            cout<<"Number is odd"<<endl;
        }

        cout<<"Do you want another run? ";
        cin>>choice;
    } while(choice == 'y' || choice == 'Y');
    cout<<"End of program"<<endl;

        cout<<"\n----- example 2: loop with a break statement -----"<<endl;
    // break statement terminates or exits the entire loop iteration
    // use loop to add positive numbers, if a negative number is entered, the loop will end.
    int sumnumbers = 0;
    int n;

    while(true){
        cout<<"Enter a positive number: ";
        cin>>n;

        if(n>0){
            sumnumbers += n;
        }
        else{
            break;
        }
    }

    cout<<"End of while loop. Total sum = "<<sumnumbers<<endl;

        cout<<"\n----- example 3: loop with a continue statement -----"<<endl;
    // print 1 to 9, inclusive, add all numbers except 5
    int sumall = 0;

    for(int m = 1; m<=9 ; m++){
        cout<<m<<"\t";
        if(m==5)
            continue;
        sumall += m;
    }

    cout<<endl<<"Total sum = "<<sumall<<endl;

        cout<<"\n----- example 4: loop with conditional statement -----"<<endl;
    // declare variables
    int count = 0;
    int i = 10;

    while(i>5){
        i--;
        if(i%2 == 0){
            count += i;
            continue;
        }
        count -= 3;
    }

    cout<<"Final count is = "<<count<<endl; // count--- final count is = 5
    /* table to analyze the flow of a loop with conditional statement

    loop iteration  |   while(i>5) |   i--     |   if (i%2 ==0 )  | count += i    | count -= 3
    ------------------------------------------------------------------------------------------------

        /* table to analyze the flow of a loop with conditional statement

    loop iteration  |   while(i>5) |   i--     |   if (i%2 ==0 )  | count += i    | count -= 3
    ------------------------------------------------------------------------------------------------
          1         |   while(10>5)|  10-1 = 9 |  if(9%2==0)      |   skipped     | count = 0-3 = -3
                    |   true       |  i=9      |  false           |               |
    ------------------------------------------------------------------------------------------------
          2         |   while(9>5) |  9-1 = 8  |  if(8%2 == 0)    |count = -3+8=5 | skipped
                    |   true       |  i = 8    |  true            |count = 5      |because of continue
    ------------------------------------------------------------------------------------------------
          3         |   while(8>5) |  8-1=7    |  if(7%2 ==0)     |   skipped     | count = 5 - 3 =2
                    |   true       |  i = 7    |  false           |               |
    ------------------------------------------------------------------------------------------------
          4         |   while (7>5)|  7-1=6    |  if(6%2==0)      | count = 2+6   | skipped
                    |   true       |  i=6      |  true            | count = 8     |because of continue
    ------------------------------------------------------------------------------------------------
          5         |   while(6>5) |  6-1=5    |  if(5%2==0)      |   skipped     | count = 8 - 3 = 5
                    |   true       |  i = 5    |  false           |               |
    ------------------------------------------------------------------------------------------------
          6         |   while (5>5)|
                    |   false ---> stop while loop

    */


    /*
                                                         Exercise 1

table to analyze the flow of a loop with continue statement

## loop iteration  |   n   |   n > 0      |   if(n%3 == 0)   |   count++;          |   sum += n;          |   n-=2

```
  1         |   20  |   20 > 0     |   if(20%3 == 0)  |   skipped           |   sum = 0 + 20 = 20  |   n = 18
            |       |   true       |   false          |                     |   sum = 20           |
```

---

```
  2         |   18  |   18 > 0     |   if(18%3 == 0)  |   count = 0 + 1 = 1 |   skipped            |   n = 16
            |       |   true       |   true           |   count = 1         |   because continue   |
```

---

```
  3         |   16  |   16 > 0     |   if(16%3 == 0)  |   skipped           |   sum = 20 + 16 = 36 |   n = 14
            |       |   true       |   false          |                     |   sum = 36           |
```

---

```
  4         |   14  |   14 > 0     |   if(14%3 == 0)  |   skipped           |   sum = 36 + 14 = 50 |   n = 12
            |       |   true       |   false          |                     |   sum = 50           |
```

---

```
  5         |   12  |   12 > 0     |   if(12%3 == 0)  |   count = 1 + 1 = 2 |   skipped            |   n = 10
            |       |   true       |   true           |   count = 2         |   because continue   |
```

---

```
  6         |   10  |   10 > 0     |   if(10%3 == 0)  |   skipped           |   sum = 50 + 10 = 60 |   n = 8
            |       |   true       |   false          |                     |   sum = 60           |
```

---

```
  7         |   8   |   8 > 0      |   if(8%3 == 0)   |   skipped           |   sum = 60 + 8 = 68  |   n = 6
            |       |   true       |   false          |                     |   sum = 68           |
```

---

```
  8         |   6   |   6 > 0      |   if(6%3 == 0)   |   count = 2 + 1 = 3 |   skipped            |   n = 4
            |       |   true       |   true           |   count = 3         |   because continue   |
```

---

```
  9         |   4   |   4 > 0      |   if(4%3 == 0)   |   skipped           |   sum = 68 + 4 = 72  |   n = 2
            |       |   true       |   false          |                     |   sum = 72           |
```

---

```
  10        |   2   |   2 > 0      |   if(2%3 == 0)   |   skipped           |   sum = 72 + 2 = 74  |   n = 0
            |       |   true       |   false          |                     |   sum = 74           |
```

---

```
  11        |   0   |   0 > 0
            |       |   false ----> stop for loop
```

After the for loop, terminal will print:

The sum is: 74
The count is: 3

                                                            Exercise 2

table to analyze the flow of a while loop with continue statement

## loop iteration  |   while(i<=10)   |   i++       |   if(i<5 && i !=2)    |   cout<<"i = "<<i;   |   else       |   add += i

```
  1         |   while(0<=10)   |   0+1 = 1   |   if(1<5 && 1!=2)     |   i = 1              |   skipped    |   add = 0 + 1 = 1
            |   true           |   i = 1     |   true                |                      |              |   add = 1
```

---

```
  2         |   while(1<=10)   |   1+1 = 2   |   if(2<5 && 2!=2)     |   skipped            |   continue   |   skipped
            |   true           |   i = 2     |   false               |                      |   true       |   because continue
```

---

```
  3         |   while(2<=10)   |   2+1 = 3   |   if(3<5 && 3!=2)     |   i = 3              |   skipped    |   add = 1 + 3 = 4
            |   true           |   i = 3     |   true                |                      |              |   add = 4
```

---

```
  4         |   while(3<=10)   |   3+1 = 4   |   if(4<5 && 4!=2)     |   i = 4              |   skipped    |   add = 4 + 4 = 8
            |   true           |   i = 4     |   true                |                      |              |   add = 8
```

---

```
  5         |   while(4<=10)   |   4+1 = 5   |   if(5<5 && 5!=2)     |   skipped            |   continue   |   skipped
            |   true           |   i = 5     |   false               |                      |   true       |   because continue
```

---

```
  6         |   while(5<=10)   |   5+1 = 6   |   if(6<5 && 6!=2)     |   skipped            |   continue   |   skipped
            |   true           |   i = 6     |   false               |                      |   true       |   because continue
```

---

```
  7         |   while(6<=10)   |   6+1 = 7   |   if(7<5 && 7!=2)     |   skipped            |   continue   |   skipped
            |   true           |   i = 7     |   false               |                      |   true       |   because continue
```

---

```
  8         |   while(7<=10)   |   7+1 = 8   |   if(8<5 && 8!=2)     |   skipped            |   continue   |   skipped
            |   true           |   i = 8     |   false               |                      |   true       |   because continue
```

---

```
  9         |   while(8<=10)   |   8+1 = 9   |   if(9<5 && 9!=2)     |   skipped            |   continue   |   skipped
            |   true           |   i = 9     |   false               |                      |   true       |   because continue
```

---

```
  10        |   while(9<=10)   |   9+1 = 10  |   if(10<5 && 10!=2)   |   skipped            |   continue   |   skipped
            |   true           |   i = 10    |   false               |                      |   true       |   because continue
```

---

```
  11        |   while(10<=10)  |   10+1 = 11 |   if(11<5 && 11!=2)   |   skipped            |   continue   |   skipped
            |   true           |   i = 11    |   false               |                      |   true       |   because continue
```

---

```
  12        |   while(11<=10)
            |   false ----> stop while loop
```

After the while loop, terminal will print:

i = 1
i = 3
i = 4
Add = 8

*/


    return 0;
}