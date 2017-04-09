# Speak Like a Document Lab
This tutorial will lead you through a fun experience with using maps to implement complex learning functions.  

Machine learning has become increasingly popular in Computer Science.  A training set is used to set up the probability of an event occurring given a set of inputs.  In this lab you will train a map on the words from a document and then produce text that has the same distribution of words as the original document.

In order to complete this lab, you will need to become familiar with maps.  Maps are like arrays or vectors except that they can be indexed by any data type.  So you can index into a Map using a string or almost anything else.

If you are reading english text, the context of words in a phrase can be represented by a deque.  If you use this as the key to a Map, then you can create a vector of words that follow that phrases.  

Once you have trained this map from a deque to a vector of next words, you can generate text that sounds like the document by choosing a random key from the Map, then follow that key to a random next word.  Then look up the deque containing generated words to find the next word in your generated text.

To start with, you should make sure you can read in the words from a book and place them in a vector of strings.  We did this in the last learning activity, so make sure that code is working.  If you haven't got this working, go through the [sets learning activity](https://github.com/BYUCS235/sets).
```c++
```
