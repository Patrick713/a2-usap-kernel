cmd_net/sched/sch_fq_codel.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_fq_codel.ko net/sched/sch_fq_codel.o net/sched/sch_fq_codel.mod.o;  true