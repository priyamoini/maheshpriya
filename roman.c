 includ<stdio.h>
 int ( int first, int second , char operation)
{
    switch(operation){
        case '+':
            return first + second;
            break;
        case '-':
            return first - second;
            break;
        case '*':
            return first * second;
            break;
        case '/':
            if( second != 0)
                return first/second;
            else
                break;
        default:
            return <=20;
    }
    return <=20;
}
