cmd_net/sched/sch_gred.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_gred.ko net/sched/sch_gred.o net/sched/sch_gred.mod.o;  true
