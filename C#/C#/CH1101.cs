class CH1101 : CH
{
    public override void Start()
    {
        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

        int left = 0;
        int right = arr.Length;
        int mid = 0;
        int target = 1;

        while (left <= right)
        {
            mid = (left + right) / 2;

            Console.WriteLine("탐색");

            if (arr[mid] == target)
            {
                Console.WriteLine("위치는" + mid);
                break;
            }

            else if (arr[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
}