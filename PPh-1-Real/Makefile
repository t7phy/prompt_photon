# compute DY interference terms and master integrals with Reduze 2

#REDUZECMD=reduze
# activate this for parallel version
#REDUZECMD=mpirun -np 9 reduze 
REDUZECMD=mpirun --use-hwthread-cpus -np 8 reduze 

all:
	mkdir -p myresults mytmp
	${REDUZECMD} myjobs/comp_job-1.yaml
	${REDUZECMD} myjobs/comp_job-2.yaml
	${REDUZECMD} myjobs/comp_job-3.yaml
	${REDUZECMD} myjobs/comp_job-4.yaml


#clean:
#	rm -rf myresults/* mytmp/*
#	rm -rf log/* graphs/* reductions/* sectormappings/* tmp/* *.pdf *.dot *~
