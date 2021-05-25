// Function to sort a dict struct
#include <stdio.h>

struct entry
{
    char word[15];
    char definition[50];
};

void dictionarySort(struct entry[], int);
int compareStrings(const char[], const char[]);

/** Bubble sort. Repeatedly swap adjacent elements if they 
 * are in wrong order   */
void dictionarySort(struct entry sDictionary[], int nEntries)
{
    int i, j;
    struct entry temp;

    for (i = 0; i < nEntries; ++i)
    {
        for (j = i + 1; j < nEntries; ++j)
        {
            if (compareStrings(sDictionary[i].word, sDictionary[j].word) == 1)
            {
                temp = sDictionary[i];
                sDictionary[i] = sDictionary[j];
                sDictionary[j] = temp;
            }
        }
        printf("Pass: %i -> ", i);
    }
}

int compareStrings(const char s1[], const char s2[])
{
    int i = 0, answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }

    if (s1[i] < s2[i])
    {
        answer = -1; /* s1 is less than s2  */
    }
    else if (s1[i] == s2[i])
    {
        answer = 0; /* s1 and s2 are equal */
    }
    else
    {
        answer = 1; /* s1 is greater than s2 */
    }

    return answer;
}

int main(void)
{
    struct entry dictionary[100] =
        {
            {"ajar", "partially opened"},
            {"abyss", "a bottomless pit"},
            {"agar", "a jelly made from seaweed"},
            {"acumen", "mentally sharp; keen"},
            {"aardvark", "a burrowing African mamal"},
            {"affix", "to append; attach"},
            {"addle", "to become confused"},
            {"ahoy", "a nautical call of greeting"},
            {"aigrette", "an ornamental cluster of feathers"},
            {"aerie", "a high nest"}};

    dictionarySort(dictionary, 10);

    for (int i = 0; i <= 10; ++i)
    {
        printf("%s\n", dictionary[i].word);
    }

    return 0;
}
