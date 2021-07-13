

int increment()
{
    static int count = 0; //without static the count will be 1//
    count = count + 1;
    return count;
}
