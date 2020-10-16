cmd_net/sched/sch_red.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_red.ko net/sched/sch_red.o net/sched/sch_red.mod.o;  true
