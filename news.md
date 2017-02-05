---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### Finished Grading Exercise 3
**02/04/2017**

I've finished grading Exercise 3. Like last time, if you did not get an email from me with your grade, I did not receive your Exercise. If you submitted the Exercise before the deadline and still did not receive a grade, please forward the email that you sent (through bobby) to me.

Common mistakes I saw were: 

- Not specifying that cat displays the **entire** or **full** contents of a file to the screen. The more command also displays the content of a file to the screen. However, more displays the content one page at a time. I need something in your answers to distinguish the two.

- Stating that cp renames a file or creates a new file. It copies the contents of the file specified in the first argument to the file specified in the second argument. The original file is left untouched (does not rename that file) and the second file is not nessesarily a new file. If the file already exists, it will be overwritten.

That's all! Enjoy the rest of your weekend!

## Old Posts:

Ofcourse, there's not much here yet since I just created this GitHub page...

<ul>
  {% for post in site.posts %}
    <li>
      <a href="/cs135/{{ post.url }}">{{ post.title }}</a>
    </li>
  {% endfor %}
</ul>
