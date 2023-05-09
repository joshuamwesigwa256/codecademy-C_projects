# Anagram Finder
In this project, we will write a program to determine 
whether two strings are anagrams or not.

## Comparing by string `x` and `y`
String `y` is an anagram of string `x`. This implies that
`y` and `x` have the same letters with the same amount of
each letter  e.g. "code" and "deco" are anagrams!

## Back to this project.
The constraints of this project are: Each string will
contain only characters that are from the first four 
letters  of the English alphabet ('a', 'b', 'c', 'd') and
spaces. All letters are in lowercase.

## Procedure.
We will do this by creating two arrays of length four: one
for each string that represents the count of each character.
These arrays will serve as counters. In each array, the
number at position zero corresponds to the count of the
letter ‘a’, the number at position one will correspond to
the count of the letter ’b’ and this pattern will continue
for the remaining letters. We do not count the number of
spaces. For example, “a bc d” would be an anagram of “ab cd”.

We will then loop through both strings and update their
respective counters.

We will then compare the two counters to see if the two
strings are anagrams and if they are, we will print
**“Anagram!”**. If they are not, we will print 
**“Not Anagram!”**

Let’s get started!!


