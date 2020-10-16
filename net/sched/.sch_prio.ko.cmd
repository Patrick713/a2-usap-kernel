cmd_net/sched/sch_prio.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_prio.ko net/sched/sch_prio.o net/sched/sch_prio.mod.o;  true
