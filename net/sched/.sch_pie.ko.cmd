cmd_net/sched/sch_pie.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_pie.ko net/sched/sch_pie.o net/sched/sch_pie.mod.o;  true
