---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**04/30/2017**

Well, that wraps up the last Exercise guys! You're almost there, keep up the good work!

Common mistates:
- Copy and pasting the bubblesort function directly without editing it to work with floats/doubles instead of integers
- Not setting the precision for the number list output to 1
- Not incrementing count correctly (setting it one too high)

I will put the test files I used for this Exercise under the Exercise 11 tab.

If you have any questions about your grades for any of the Exercises, please send them asap. 
I will be turning grades into the professors shortly.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
