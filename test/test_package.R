install.packages("remotes")
remotes::install_github("cgeoga/libmatern", auth_token = Sys.getenv("GITHUB_PAT"))
library("libmatern")
besselk(1.1, 2.1, 0)
