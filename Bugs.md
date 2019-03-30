#Testing report of the Application

Module | Status | Bugs found | Bugs Fixed
-------|--------|------------|-----------
Login Page|Pending|-|-
Sign-up form| Testing| 1 | 0
Admin Page| Testing | 1 | 0



## Sign up form

__1. No promt informing that appliation has been sent__
* Bug: No message or text appears that informs the user that application has been sent. It leaves the applicant with ambiguous knowledge of his application and may result in him applying again 
* Steps to recreate: Attempt to sign up > Apply for the application 
* Fix: Possibly adding a message box and/or clearing the textboxes
* Status: Pending


## Admin Page
__1. No warning when admin approves user with same username__
* Bug: When admin approves 2 application requests with same username, no warning is shown. 
* Steps to recreate: Open signup form > apply for a user > apply for another user but with different password > Approve both from admin page > Attempt to login with both (only one will work)
* Fix: Warning or stopping the admin from approving a user when a username already exists
* Status: pending
