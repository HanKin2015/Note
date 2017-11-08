[TOC]
# Cousera课程笔记
## Welcome
### Machine Learning Honor Code

We strongly encourage students to form study groups, and discuss the lecture videos (including in-video questions). We also encourage you to get together with friends to watch the videos together as a group. However, the answers that you submit for the review questions should be your own work. For the programming exercises, you are welcome to discuss them with other students, discuss specific algorithms, properties of algorithms, etc.; we ask only that you not look at any source code written by a different student, nor show your solution code to other students.

### Guidelines for Posting Code in Discussion Forums

Scenario 1: Code to delete

Learner Question/Comment: "Here is the code I have so far, but it fails the grader. Please help me fix it."

Why Delete?: The reason is that if there is a simple fix provided by a student, a quick copy and paste with a small edit will provide credit without individual effort.

Learner Question: A student substitutes words for the math operators, but includes the variable names (or substitutes the equivalent greek letters (θ for 'theta', etc). This student also provides a sentence-by-sentence, line by line, description of exactly what their code implements. "The first line of my script has the equation "hypothesis equals theta times X", but I get the following error message...".

Why Delete?: This should be deleted. “Spelling out” the code in English is the same as using the regular code.

Scenario 2: Code not to delete

Learner Question: How do I subset a matrix to eliminate the intercept?

Mentor Response: This probably would be okay, especially if the person posting makes an effort to not use familiar variable names, or to use a context which has nothing to do with the contexts in the assignments.

It is clearly ok to show examples of Octave code to demonstrate a technique. Even if the technique itself is directly applicable to a programming problem at hand. As long as what is typed cannot be "cut and pasted" into the program at hand.

E.g. how do I set column 1 of a matrix to zero? Try this in your Octave work area:

>> A = magic(3)

>> A(:,1) = 0

The above is always acceptable (in my understanding). Demonstrating techniques and learning the language/syntax are important Forum activities.

## Introduction
### How to Use Discussion Forums

Upvoting Posts

When you enter the discussion forum for your course, you will see an Upvote button under each post. We encourage you to upvote posts you find thoughtful, interesting, or helpful. This is the best way to ensure that quality posts will be seen by other learners in the course. Upvoting will also increase the likelihood that important questions get addressed and answered.

Report Abuse

Coursera's Code of Conduct prohibits:

Bullying or threatening other users
Posting spam or promotional content
Posting mature content
Posting assignment solutions (or other violations of the Honor Code)
Please report any posts that infringe upon copyright or are abusive, offensive, or that otherwise violate Coursera’s Honor Code by using the Report this option found under the menu arrow to the right of each post.

Following

If you find a particular thread interesting, click the Follow button under the original post of that thread page. When you follow a post, you will receive an email notification anytime a new post is made.

Improving Your Posts

Course discussion forums are your chance to interact with thousands of like-minded individuals around the world. Getting their attention is one way to do well in this course. In any social interaction, certain rules of etiquette are expected and contribute to more enjoyable and productive communication. The following are tips for interacting in this course via the forums, adapted from guidelines originally compiled by AHA! and Chuq Von Rospach & Gene Spafford:

Stay on topic in existing forums and threads. Off-topic posts make it hard for other learners to find information they need. Post in the most appropriate forum for your topic, and do not post the same thing in multiple forums.
Use the filters at the top of the forum page (Latest, Top, and Unanswered) to find active, interesting content.
Upvote posts that are helpful and interesting.
Be civil. If you disagree, explain your position with respect and refrain from any and all personal attacks.
Stay on topic. In particular, don’t change the subject in the middle of an existing thread – just start a new topic.
Make sure you’re understood, even by non-native English speakers. Try to write full sentences, and avoid text-message abbreviations or slang. Be careful when you use humor and sarcasm as these messages are easy to misinterpret.
If asking a question, provide as much information as possible, what you’ve already considered, what you’ve already read, etc.
Cite appropriate references when using someone else’s ideas, thoughts, or words.
Do not use a forum to promote your product, service, or business.
Conclude posts by inviting other learners to extend the discussion. For example, you could say “I would love to understand what others think.”
Do not post personal information about other posters in the forum.
Report spammers.
For more details, refer to Coursera's Forum Code of Conduct.

These tips and tools for interacting in this course via the forums were adapted from guidelines originally by The University of Illinois.
### What is Machine Learning?

Two definitions of Machine Learning are offered. Arthur Samuel described it as: "the field of study that gives computers the ability to learn without being explicitly programmed." This is an older, informal definition.

Tom Mitchell provides a more modern definition: "A computer program is said to learn from experience E with respect to some class of tasks T and performance measure P, if its performance at tasks in T, as measured by P, improves with experience E."

Example: playing checkers.

E = the experience of playing many games of checkers

T = the task of playing checkers.

P = the probability that the program will win the next game.

In general, any machine learning problem can be assigned to one of two broad classifications:

Supervised learning and Unsupervised learning.

## Supervised Learning

In supervised learning, we are given a data set and already know what our correct output should look like, having the idea that there is a relationship between the input and the output.

Supervised learning problems are categorized into "regression" and "classification" problems. In a regression problem, we are trying to predict results within a continuous output, meaning that we are trying to map input variables to some continuous function. In a classification problem, we are instead trying to predict results in a discrete output. In other words, we are trying to map input variables into discrete categories.

Example 1:

Given data about the size of houses on the real estate market, try to predict their price. Price as a function of size is a continuous output, so this is a regression problem.

We could turn this example into a classification problem by instead making our output about whether the house "sells for more or less than the asking price." Here we are classifying the houses based on price into two discrete categories.

Example 2:

(a) Regression - Given a picture of a person, we have to predict their age on the basis of the given picture

(b) Classification - Given a patient with a tumor, we have to predict whether the tumor is malignant or benign.

## Unsupervised Learning

Unsupervised learning allows us to approach problems with little or no idea what our results should look like. We can derive structure from data where we don't necessarily know the effect of the variables.

We can derive this structure by clustering the data based on relationships among the variables in the data.

With unsupervised learning there is no feedback based on the prediction results.

Example:

Clustering: Take a collection of 1,000,000 different genes, and find a way to automatically group these genes into groups that are somehow similar or related by different variables, such as lifespan, location, roles, and so on.

Non-clustering: The "Cocktail Party Algorithm", allows you to find structure in a chaotic environment. (i.e. identifying individual voices and music from a mesh of sounds at a cocktail party).

## Mentor Program Overview:

Community Mentors are successful, dedicated Coursera learners who volunteer to assist with support and discussion forum moderation in courses that they have already completed. They have been recruited by Coursera to encourage newer learners, answer questions, set an example by posting thoughtful and timely content, and report platform bugs and inappropriate content to Coursera.

As you use the discussion areas, please be aware that the ideas expressed by participants in this course, including the Mentors, do not represent the views of Stanford University. The mentors are not employed by Stanford University and they have not been vetted by Stanford University as experts on course content or course facilitation.

## Get to Know Your Classmates

Overview

Working well with your classmates is an important part of this online course. Thus, at the beginning of this course, we would like you to take time to break the ice and get to know each other. You may already know some of your classmates or have just met them. Establishing personal interaction with other students will make your online learning experience much more enjoyable and engaging. As such, we encourage you to participate in this activity, though it is optional.

Meet and Greet

Tell everyone your story! Optionally, you are asked to provide a brief introduction to your classmates. If you don't know what to include in your introduction, you may want to provide information that you'd like to share with your classmates by answering some of the following questions.

Suggested Topics

Where are you from? If you wish to include this information in your post, you can also include it below the body of your post in the "tags" area. For example, include your state (if living within the United States) or country in the tags section.
Career and education? What is your educational background? What do you currently do? Are you currently pursuing a change in careers and/or more education?
Hopes? Why did you decide to take this course? What are your expectations of this course? What problem are you trying to solve? What do you hope to put into place in your life the day this course is over?
Other info? Share with us any other information that might help others in the class find you when searching the forums. What common interests might you share with your classmates? We have tens of thousands of students enrolled in this course – put something in your post that will help others who are like you to find you.
Go to the Meet and Greet forum and click the New Thread button to begin a new thread. Use your name and a brief summary as the subject of your post. For example, Robert Smith: Exploring Career Options. Read some your classmates' postings. Pick at least 2 classmates' postings that are most interesting to you and add your friendly comments.

Updating Your Profile

Optionally, please consider updating your profile, which can also be accessed by clicking the Profile link in the menu that appears when you click on your name at the top-right corner of this screen. When people find you in the forums, they can click on your name to view your complete profile and get to know you more.

Time

This activity will take approximately 1 hour to complete.

These guidelines for interacting with fellow classmates via the forums were originally compiled by The University of Illinois.

## Frequently Asked Questions
The following Machine Learning Mentors volunteered time to compile this list of Frequently Asked Questions: Colin Beckingham, Kevin Burnham, Maxim Haytovich, Tom Mosher, Richard Gayle, Simon Crase, Michael Reardon and Paul Mielke.

Be sure to thank them when you see them in the discussion forums!

General Questions

Q: Is the grader server down? A: First step is to check here.

Q: The audio in the videos is quite bad sometimes, muffled or low volume. Please fix it. A: You can mitigate the audio issues by turning down the bass and up the treble if you have those controls, or using a headset, which naturally emphasizes the higher frequencies. Also you may want to switch on the English closed captioning. It is unlikely to be fixed in the near term because most students do not have serious problems and therefore it is low on the priority list.

Q: What does it mean when I see “Math Processing Error?” A: The page is attempting to use MathJax to render math symbols. Sometimes the content delivery network can be sluggish or you have caught the web page Ajax javascript code in an incomplete state. Normally just refreshing the page to make it load fully fixes the problem

Q: How can I download lectures? A: On Demand videos cannot be downloaded.

Q: Is there a prerequisite for this course?A: Students are expected to have the following background:

Knowledge of basic computer science principles and skills, at a level sufficient to write a reasonably non-trivial computer program.
Familiarity with the basic probability theory.
Familiarity with the basic linear algebra.
Q: Why do we have to use Matlab or Octave? Why not Clojure, Julia, Python, R or [Insert favourite language here]?A: As Prof. Ng explained in the 1st video of the Octave tutorial, he has tried teaching Machine Learning in a variety of languages, and found that students come up to speed faster with Matlab/Octave. Therefore the course was designed using Octave/Matlab, and the automatic submission grader uses those program interfaces. Octave and Matlab are optimized for rapid vectorized calculations, which is very useful in Machine Learning. R is a nice tool, but:

1.	It is a bit too high level. This course shows how to actually implement the algorithms of machine learning, while R already has them implemented. Since the focus of this course is to show you what happens in ML algorithms under the hood, you need to use Octave 2.	This course offers some starter code in Octave/Matlab, which will really save you tons of time solving the tasks.

Q: I'm viewing through Coursera and don't see sample problems or assignments I can use to practice the material from the course?A: You can view sample problems here.

Q: How can I get the written lecture notes of the topics going in the course? A: You may find the notes from a previous version of the course here.

Q: Has anyone figured out the how to solve this problem? Here is my code [Insert code]. A: This is a violation of the Coursera Honor Code. Find the Honor Code here.

Q: I've submitted correct answers for [insert problem]. However I would like to compare my implementation with other who did correctly. A: This is a violation of the Coursera Honor Code. Find the Honor Code here.

Q: This is my email: [insert email]. Can we get the answer for the quiz? A: This is a violation of the Coursera Honor Code. Find the Honor Code here.

Q: Do I receive a certificate once I complete this course? A: Course Certificate is available in this course. Click here to learn about how Course Certificate works and how to purchase.

Q: Lots of the material in the Wiki is out of date. Whose responsibility is it to fix it? A: Yours: the Wiki is student maintained. If you see something is wrong, you can fix it if you are inclined to.

Q: Why do all the answers in a multiple correct question say correct response when you submit the answer to an in-video question? A: Coursera's software is designed to suggest the correctness of each state of the check box. Therefore, an answer having a correct answer tag below it means that the state of that check box is correct.

Q: What is the correct technique of entering a numeric answer to a text box question ? A: Coursera's software for numeric answers only supports '.' as the decimal delimiter (not ',') and require that fractions be simplified to decimals. For answers with many decimal digits, please use a 2 digits after decimal point rounding method when entering solutions if not mentioned in the question.

Q: What is the correct technique of entering a 1 element matrix ? A: They should be entered as just the element without brackets.

Q: What does a A being a 3 element vector or a 3 dimensional vector mean? A: If not described a vector as mentioned in the questions is A=⎡⎣element1element2element3⎤⎦.

Q: I think I found an error in a video. What should I do? A: First, check the errata section under supplementary materials. If you do not find the error listed, then flag the issue. If you are unsure if it is an error, create a new thread in the discussion forum describing the error.

Q: My quiz grade displayed is wrong or I have a verification issue or I cannot retake a quiz. What should I do? A: Contact learner support. These queries can only be resolved by learner support and it is best if they are contacted directly. Do not flag such issues.

## Review
### 
