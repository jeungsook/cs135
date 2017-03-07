---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**03/07/2017**

So, as anyone who came to yesterday's lab already knows, I was pretty sick yesterday and had Joel cover for me.
I asked him to go over Exercise 7, Linux redirection, and for loops, I hope that cleared up some of the questions about Exercise 7!

But, this news post is a response from an email asking me if I can answer questions about Exercises through emails:

I'm here to help you! Of course you can email me questions! You can come to my office hours and I will go over your previous Exercises with you
or explain your current Exercises, Assignments, or test questions, or whatever you like. Or you can ask me during lab hours.

Also, if you want me to cover something specifically in the lab, just ask and I'd be happy to.

If that something is "the entire code solution for Exercise 7" we're going to have problems but that doesn't mean you can't ask
me ANYTHING. It's great that you guys want to figure out everything yourself but if you're really stuck, don't hesitate, waste time,
or suffer in silence! 

I try my best to respond to emails as fast as I can but I can't help you (grade-wise) after the due date so shoot out your SOS ASAP.

It's dangerous to go alone! Take this:

```
   ^
   |
   T
\(^o^)/
```

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
