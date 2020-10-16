cmd_net/sched/sch_fq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_fq.ko net/sched/sch_fq.o net/sched/sch_fq.mod.o;  true
