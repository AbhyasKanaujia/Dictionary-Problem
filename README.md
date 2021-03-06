# Word Position Problem

There is a question in permutation chapter in my maths class where for a given word we need to find its position in dictionary order. This means to permute the letter of the given word to all possible arrangements (may/may not be meaningful), arrange them in dictionary order and to find the rank of the given word in such arrangement.

For given word `BCA`, if we start arranging in dictionary order, we get:

```
1. ABC
2. ACB
3. BAC
4. BCA
5. CAB
6. CBA
```

These are the only possible arrangements and are in dictionary order. The position of BCA in such arrangement is `4`. Which is the solution of the given problem.

My first task is to write a program that can give me the position of a given word if permutated and arranged in dictionary order.

After I've accomplished this, for a given position I want to be able to return the word that would appear at that position in such an arrangement.

After this has been accomplished, I want to be able to pass my program a file containing a list of words and output a file containing the word in one column, rank in another column and for the output to be arranged in the order of the rank in ascending order. For example:

Input File:

```
Random
Tango
Number
Zenith
Delhi
Mother
Father
Failure
```

Output File:

```
Delhi 5
Tango 99
Father 261
Mother 309
Number 469
Random 614
Zenith 616
Failure 1476
```

## Motivation

While doing my homework I noticed most answers were really big requiring a lots of multiplication and lot more steps to reach the answer, except for the word "Delhi".Such words are very ill suited for my entrance exam. They should _not_ give us such question, considering that we only have 30 sec - 1 min for each question. But then how would they find more words like Delhi if they had to?

This gave me the idea for this problem. I want to know if there are more such words which rank lower in such an arrangement. And if there are, what are they?
