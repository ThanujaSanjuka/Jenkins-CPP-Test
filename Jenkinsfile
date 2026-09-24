pipeline {
    agent any

    stages {
        stage('Cleanup Workplace'){
            steps {
                sh 'rm -f  myapp'
            }
        }
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
        stage('Save Artifact'){
            steps {
                archiveArtifacts artifacts: 'myapp' , fingerprint: true
            }
        }
    }
}
