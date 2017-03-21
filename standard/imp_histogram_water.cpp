/*
Imagine that you have an histogram stored in an array. Now imagine that you can pour water on 
top of your histogram. Describe an algorithm that computers the amount of water that remains 
trapped among the columns of the graph. Clearly on the edges the water would fall off. Use the language or psudocode
you prefer.
*/


int FillWater(int* histogram, int length)
{
    int waterCollected = 0;
    int *maxLeft = new int [length];
    int *maxRight = new int [length];

    //For each values, calculate the maximum value to its left
    maxLeft[0] = 0;
    for(int i = 1; i < length; i++)
    {
        maxLeft[i] = max(histogram[i-1], maxLeft[i-1]);
    }

    //For each values, calculate the maximum value to its right
    maxRight[length-1] = 0;
    for(int i = length - 2; i >= 0; i--)
    {
        maxRight[i] = max(histogram[i+1], maxRight[i+1]);
    }

    //At each index, water collected will be collected, if it is a dip
    //Amount of water collected will be [min(maxLeft[i], maxRight[i]) - value at that index]
    for(int i = 0; i < length; i++)
    {
        if(maxLeft[i] > histogram[i] && maxRight[i] > histogram[i])
        {
            waterCollected += (min(maxLeft[i], maxRight[i]) - histogram[i]);
        }
    }
    delete[] maxLeft;
    delete[] maxRight;
    return waterCollected;
}
