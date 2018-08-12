# count-small-files-with-ls
This handy utility prints the number of files which are less than a specified size, and with *at least* a specified set of permissions.

## Getting Started

### Prerequisites

* GCC
* Shell in *Linux*

Not supported for macOS bacause of the `ls` difference.

### Download source code and compile
The following instructions are presented using bash in Ubuntu 16.04 LTS:
```
# Change to HOME directory
$ cd ~

# Clone this repo and 'cd' into it
$ git clone https://github.com/jellycsc/count-small-files-with-ls.git
$ cd count-small-files-with-ls/

# Let's compile.
$ gcc -Wall -o count_small count_small.c
```

### Usage
```
USAGE: count_samll size [permissions]
# Example permission: rwxrwxrwx
# OR maybe rw-r--r--
```

### Example
```
$ ls -l
total 56
-rwxr-xr-x 1 nichenji jellycsc  8920 Aug 11 23:52 count_small
-rw-r----- 1 nichenji jellycsc  1633 Aug 11 23:51 count_small.c
-rw-r--r-- 1 nichenji jellycsc 35147 Aug 11 23:51 LICENSE
-rw-r--r-- 1 nichenji jellycsc   132 Aug 11 23:51 README.md
$ ls -l | ./count_small 2000
2
$ ls -l | ./count_small 2000 rw-r--r--
1
```

## Authors

| Name                    | GitHub                                     | Email
| ----------------------- | ------------------------------------------ | -------------------------
| Chenjie (Jack) Ni       | [jellycsc](https://github.com/jellycsc)    | nichenjie2013@gmail.com

## Thoughts and future improvements

* Since this is a rather simple beginner's project, no further improvements will be made.

## Contributing to this project

1. Fork it [![GitHub forks](https://img.shields.io/github/forks/jellycsc/count-small-files-with-ls.svg?style=social&label=Fork&maxAge=2592000)](https://github.com/jellycsc/count-small-files-with-ls/fork)
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -m 'Add some feature'`)
4. Push to your feature branch (`git push origin my-new-feature`)
5. Create a new Pull Request

Details are described [here](https://git-scm.com/book/en/v2/GitHub-Contributing-to-a-Project).

## Bug Reporting [![GitHub issues](https://img.shields.io/github/issues/jellycsc/count-small-files-with-ls.svg)](https://github.com/jellycsc/count-small-files-with-ls/issues/)

Please click `issue` button above↑ to report any issues related to this project  
OR you can shoot an email to <nichenjie2013@gmail.com>

## License
This project is licensed under GNU General Public License v3.0 - see [LICENSE](LICENSE) file for more details.
