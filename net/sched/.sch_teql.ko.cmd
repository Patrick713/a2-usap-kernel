cmd_net/sched/sch_teql.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_teql.ko net/sched/sch_teql.o net/sched/sch_teql.mod.o;  true