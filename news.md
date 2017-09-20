---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>

**09/20/2017**

Now that you've completed your first program from scratch, I hope you've gotten a bit used to how things are going to work in this
class. You will have 1-2 exercises a week due and I'll try to grade 1-2 exercises over the weekend. You will get a gradesheet from
me and you need to get any questions about your grade into me before, let's say Wednesday before 2:00pm.

Why that time? Well, it's the end of my office hours for the week so I decided I'll send your grades to your professors then. I 
think that gives you enough time to review your gradesheets and let me know if you have any questions or if you didn't recieve a
gradesheet.

I feel like before we go on further, I should go over creating an algorithm. Hopefully, this is something your professor has covered
already but I'm not sure if all the professors go into it. I rarely see anyone have an algorithm for their programs before they
come to me and I feel like this is one of the most important things to know going foward.

So, that's what I'll be covering next lab. See you guys then!

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
