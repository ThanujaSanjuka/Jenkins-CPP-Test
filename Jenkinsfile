pipeline {
    agent any

    stages {
        stage('Checkout Code') {
            steps {
               
                git branch: 'main', url: 'https://github.com/ThanujaSanjuka/Jenkins-CPP-Test.git'
            }
        }
        stage('Build C++') {
            steps {
                
                sh 'g++ main.cpp -o myapp'
            }
        }
        stage('Run C++ App') {
            steps {
                
                sh './myapp'
            }
        }
    }
}
