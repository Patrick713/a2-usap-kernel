cmd_net/sched/sch_cake.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_cake.ko net/sched/sch_cake.o net/sched/sch_cake.mod.o;  true
