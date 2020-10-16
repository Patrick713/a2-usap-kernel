cmd_net/sched/sch_cbq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_cbq.ko net/sched/sch_cbq.o net/sched/sch_cbq.mod.o;  true
