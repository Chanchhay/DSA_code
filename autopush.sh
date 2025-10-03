read -p "Enter your commit message: " commit_message
if [ -z "$commit_message" ]; then
  echo "Commit message is required. Exiting."
  exit 1
fi

git init
git add .
git commit -m "$commit_message"
git remote add origin git@github.com:Chanchhay/DSA_code.git
git push -u origin master
