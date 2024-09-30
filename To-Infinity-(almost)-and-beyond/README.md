  Flask WSGI Demo with Gunicorn and uWSGI

Flask WSGI Demo with Gunicorn and uWSGI
=======================================

This repository demonstrates how to run a simple Flask application using both Gunicorn and uWSGI WSGI servers, leveraging Docker and Docker Compose for easy setup and deployment.

Table of Contents
-----------------

*   [Overview](#overview)
*   [Prerequisites](#prerequisites)
*   [Project Structure](#project-structure)
*   [Running the App with Gunicorn](#running-the-app-with-gunicorn)
*   [Running the App with uWSGI](#running-the-app-with-uwsgi)
*   [Code Structure](#code-structure)
*   [Conclusion](#conclusion)
*   [License](#license)

Overview
--------

In a production environment, it’s crucial for backend applications to handle multiple requests concurrently. WSGI servers like Gunicorn and uWSGI are essential in scaling Flask applications, providing a master-worker architecture to efficiently manage incoming requests.

Prerequisites
-------------

*   [Docker](https://www.docker.com/get-started) (version 19.03 or later)
*   [Docker Compose](https://docs.docker.com/compose/install/) (version 1.27 or later)

Project Structure
-----------------
    

*   **app/:** Contains the Flask application code.
*   **gunicorn/:** Contains the Docker setup for Gunicorn.
*   **uwsgi/:** Contains the Docker setup for uWSGI.

Running the App with Gunicorn
-----------------------------

1.  **Navigate to the Gunicorn directory:**
    
    ```bash
    cd gunicorn
    ```
    
2.  **Build and run the Docker container:**
    
    ```bash
    docker-compose up --build
    ```
    
3.  **Access the app:**
    
    Open your web browser and go to [http://localhost:8000](http://localhost:8000). You should see a JSON response:
    
    ```json
    {
        "message": "Hello, World! This is a WSGI-powered Flask app!"
    }
    ```
    

Running the App with uWSGI
--------------------------

1.  **Navigate to the uWSGI directory:**
    
    ```bash
    cd uwsgi
    ```
    
2.  **Build and run the Docker container:**
    
    ```bash
    docker-compose up --build
    ```
    
3.  **Access the app:**
    
    Open your web browser and go to [http://localhost:8000](http://localhost:8000). You should see the same JSON response as before:
    
    ```json
    {
        "message": "Hello, World! This is a WSGI-powered Flask app!"
    }
    ```


Conclusion
----------

This demo provides a simple setup for running Flask applications with WSGI servers like Gunicorn and uWSGI. By leveraging Docker and Docker Compose, you can easily test and scale your applications in a controlled environment.

Feel free to explore the differences in performance and scalability between the two servers as you develop your own applications.

Contact
-------

If you encounter any issues or have any questions, feel free to reach out or open an issue on this repository. Happy coding!