cmd_net/sched/sch_mqprio.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_mqprio.ko net/sched/sch_mqprio.o net/sched/sch_mqprio.mod.o;  true