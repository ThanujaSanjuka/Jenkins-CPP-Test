pipeline {
    agent any

    stages {
        stage('Checkout Code') {
            steps {
                git branch: 'development', url: 'https://github.com/ThanujaSanjuka/Jenkins-CPP-Test.git'
            }
        }
        stage('Build C++') {
            steps {
                sh 'g++ main.cpp -o myapp'
            }
        }
        stage('Automated Test') {
            steps {
           
                sh './myapp'
            }
        }
    }
}
