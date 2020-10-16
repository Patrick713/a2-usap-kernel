cmd_net/sched/sch_qfq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_qfq.ko net/sched/sch_qfq.o net/sched/sch_qfq.mod.o;  true
