---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**03/09/2017**

I've finished grading Exercise 7. Like always, if you did not get an email from me with your grade, I did not receive your Exercise. 
If you submitted the Exercise before the deadline and still did not receive a grade, please forward the email that you sent (through bobby) to me.

Note: I always wait a day before sending Exercise scores to the professors in case you guys have any questions or issues about your grade. 
Please send any questions about your grade in within a day of recieving your grade if possible.

Overall, we didn't do so hot with Exercise 7. I will go over it briefly next lab before going over Exercise 8 & 9.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
