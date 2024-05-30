int higher(int num_list[5])
{
    int max_num = num_list[0];
    for (int i = 1; i < 5; i++)
    {
        if(num_list[i] > max_num){
            max_num = num_list[i];
        }
    }
    return max_num;
}