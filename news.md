---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**03/17/2017**

Sorry for the delay guys, midterms and my senior design project kept me busy. 
I just finished grading Exercise 8. If you did not receive your grade, you know the drill.

Common mistakes:

There was really only one common mistake besides the usual forgetting to put your name, lec # , etc... as a comment or cout statement.
That was how punctuation marks were handled.

If you read the instructions carefully, it states:

A data file for this exercise will consist of several lines of text that form sentences. 
The text may include letters, **punctuation marks**, and/or digits. 
Each sentence will be **terminated with either a period (.), an exclamation mark (!), or a question mark (?).**

The file can include punctuation marks such as commas and quotation marks in addition to the end punctuation marks.
The sample output file just happened to not contain them but my (2nd) test file did.

Therefore, the use of ispunct to catch the end punctuation will not work, nor will using an else statement that does not take these
punctuation marks into account. 

Ex: (This is pseudo-code)

if (letter) { do this } 
else if ( end punct ) { do this }
else { digits++ } < Will catch other punctuation marks

Remember to read the directions carefully and have a great weekend!

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
