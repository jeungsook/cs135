---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>

**10/30/2017**

Exercises 8 and 9 have been graded. A few things about these exercises:

- Remember to put a comment at the TOP of your program. I'm getting a lot of submissions without it.
- Remember that you need to convert the numerator or denominator when you're diving two integers into a double before you divide if you want the result to be a double.
- Averages should always be a double / float - there's no gurantee that the numbers will divide evenly.
- Please read the directions carefully, especially whether or not you need to use input / output streams or Linux redirection.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
