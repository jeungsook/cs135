---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post

### First Real Post
#### 02/03/2017

I sent everyone an email earlier, but incase you did not recieve the message:

>I finished grading everyone's exercise 2.

>If you did not get an email from me with your grade, I did not receive your exercise 2. If you submitted the exercise before the deadline and still did not receive a grade, please forward the email that you sent (through bobby) to me.

>I needed to create copies of some of the exercise 1 assignments which is why it is taking a bit longer to get them to you, but I will return them to you at the start of your next lab section.

>However, except for the students who did not turn in the printed exercise on time, no one received a grade lower than 80% on Exercise 1 so I would not worry too much about it.

Also, **the due dates for Exercise 4 and Exercise 5 have been changed from Feb. 7th to Feb.10th**

## Old Posts

Ofcourse, there's not much here yet since I just created this GitHub page...

<ul>
  {% for post in site.posts %}
    <li>
      <a href="/cs135/{{ post.url }}">{{ post.title }}</a>
    </li>
  {% endfor %}
</ul>
