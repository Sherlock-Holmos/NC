#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfccda823, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8e6e5710, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xdfc99168, __VMLINUX_SYMBOL_STR(ipa_get_wdi_stats) },
	{ 0xa88177bb, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xb1762484, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x4fe1eddf, __VMLINUX_SYMBOL_STR(unregister_netevent_notifier) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x8f15a3d8, __VMLINUX_SYMBOL_STR(icnss_socinfo_get_serial_number) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc149bbbd, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xcf18d7ba, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x4ea5d10, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0x3da1edff, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x64ea2916, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xbe2e3b75, __VMLINUX_SYMBOL_STR(kstrtos8) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x6e0e50e2, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x86ea4d38, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xdfc441cd, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x4761f17c, __VMLINUX_SYMBOL_STR(register_netevent_notifier) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xdc58076a, __VMLINUX_SYMBOL_STR(register_cld_cmd_cb) },
	{ 0xdff15e8a, __VMLINUX_SYMBOL_STR(wcnss_prealloc_get) },
	{ 0x1190eac2, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0x91ac822f, __VMLINUX_SYMBOL_STR(vscnprintf) },
	{ 0x61f4afd9, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x80877d81, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xeef617ee, __VMLINUX_SYMBOL_STR(ipa_rm_release_resource) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x41ac1e3a, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xa5af9024, __VMLINUX_SYMBOL_STR(ipa_rm_create_resource) },
	{ 0xceab0311, __VMLINUX_SYMBOL_STR(strchrnul) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2ad8ed05, __VMLINUX_SYMBOL_STR(save_stack_trace_tsk) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x521fc53, __VMLINUX_SYMBOL_STR(wcnss_prealloc_put) },
	{ 0x70556f13, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x7c6940ce, __VMLINUX_SYMBOL_STR(ipa_rm_delete_resource) },
	{ 0x29a99c94, __VMLINUX_SYMBOL_STR(__pm_wakeup_event) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x42bb9137, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xad0aa175, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x1cfdd8a2, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x69556509, __VMLINUX_SYMBOL_STR(cfg80211_ap_stopped) },
	{ 0x385df45b, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xd58963a4, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xe0930fab, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x732906cb, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xb93d503e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7cbf1ab7, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x6f199858, __VMLINUX_SYMBOL_STR(ipa_get_hw_type) },
	{ 0xe3f182d1, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xbcc7bad0, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf5dbaf59, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xd0ea76, __VMLINUX_SYMBOL_STR(cfg80211_gtk_rekey_notify) },
	{ 0x72603b8d, __VMLINUX_SYMBOL_STR(dma_common_get_sgtable) },
	{ 0x4753b9b4, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x34998478, __VMLINUX_SYMBOL_STR(ipa_resume_wdi_pipe) },
	{ 0x6b640864, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0xabd359f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x951efa5f, __VMLINUX_SYMBOL_STR(wakeup_source_add) },
	{ 0x61c3fdd0, __VMLINUX_SYMBOL_STR(icnss_is_pdr) },
	{ 0x994c4c15, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xdd62b1bd, __VMLINUX_SYMBOL_STR(ipa_rm_inactivity_timer_destroy) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x89f8d3c5, __VMLINUX_SYMBOL_STR(cfg80211_connect_done) },
	{ 0xf2a48ff6, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9448ae9b, __VMLINUX_SYMBOL_STR(cld80211_get_genl_family) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0x7164ed76, __VMLINUX_SYMBOL_STR(cfg80211_external_auth_request) },
	{ 0x5516b2d7, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xd09dc80e, __VMLINUX_SYMBOL_STR(ipa_register_intf) },
	{ 0x38912590, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xa83171f8, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9a102ffc, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x79d696c, __VMLINUX_SYMBOL_STR(cnss_utils_get_wlan_derived_mac_address) },
	{ 0xe8d5211e, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x48abc07b, __VMLINUX_SYMBOL_STR(icnss_athdiag_read) },
	{ 0x9d41ab62, __VMLINUX_SYMBOL_STR(icnss_unregister_driver) },
	{ 0x228f4555, __VMLINUX_SYMBOL_STR(kimage_voffset) },
	{ 0xb34d9fb5, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x41ddb1c3, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x8bc1866a, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x6db39a6c, __VMLINUX_SYMBOL_STR(ipa_connect_wdi_pipe) },
	{ 0xcb929abf, __VMLINUX_SYMBOL_STR(deregister_cld_cmd_cb) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc63b20aa, __VMLINUX_SYMBOL_STR(regulatory_set_wiphy_regd) },
	{ 0x19d6ba09, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xab928149, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb8bb4bc6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xee8842a8, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0x6fdee241, __VMLINUX_SYMBOL_STR(icnss_trigger_recovery) },
	{ 0xbdae1dab, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0xbf8ba54a, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0xf474c21c, __VMLINUX_SYMBOL_STR(bitmap_print_to_pagebuf) },
	{ 0x5ab7e273, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xf3443c6, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x9a7ee34b, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x4576337f, __VMLINUX_SYMBOL_STR(atomic_notifier_call_chain) },
	{ 0x6892aec4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x298e5a32, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x67422298, __VMLINUX_SYMBOL_STR(cnss_utils_increment_driver_load_cnt) },
	{ 0xe440baa8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x83f64595, __VMLINUX_SYMBOL_STR(icnss_ce_free_irq) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xd784d8d2, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd8022feb, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x30ed96ec, __VMLINUX_SYMBOL_STR(cnss_utils_get_wlan_unsafe_channel) },
	{ 0xbd4d25bd, __VMLINUX_SYMBOL_STR(ipa_rm_request_resource) },
	{ 0x50b45171, __VMLINUX_SYMBOL_STR(icnss_wlan_enable) },
	{ 0x420348c3, __VMLINUX_SYMBOL_STR(cpu_topology) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x2b4c83a0, __VMLINUX_SYMBOL_STR(ipa_enable_wdi_pipe) },
	{ 0x385e16b3, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x7a72d32d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xccd0c54e, __VMLINUX_SYMBOL_STR(ipa_teardown_sys_pipe) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x6f4cfbf4, __VMLINUX_SYMBOL_STR(seq_vprintf) },
	{ 0x13547c68, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x51cd9cad, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x62fe5678, __VMLINUX_SYMBOL_STR(cfg80211_roamed_bss) },
	{ 0x5cfec2d3, __VMLINUX_SYMBOL_STR(ipa_create_wdi_mapping) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x7e7524f6, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x5606adb5, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x745d5a84, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xec0a790e, __VMLINUX_SYMBOL_STR(ipa_add_hdr) },
	{ 0x1d92d898, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xa293e67e, __VMLINUX_SYMBOL_STR(ipa_disable_wdi_pipe) },
	{ 0x3c1b0cb6, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x97532144, __VMLINUX_SYMBOL_STR(ipa_free_skb) },
	{ 0xeb4480df, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa6331fb3, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd7dc8069, __VMLINUX_SYMBOL_STR(ipa_rm_set_perf_profile) },
	{ 0x39b304a8, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xc2ace531, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4aa93f1, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x8ae1f2c4, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x6aeb41e0, __VMLINUX_SYMBOL_STR(icnss_athdiag_write) },
	{ 0xcb699adb, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x52295280, __VMLINUX_SYMBOL_STR(cnss_utils_wlan_get_dfs_nol) },
	{ 0xf16ee386, __VMLINUX_SYMBOL_STR(napi_gro_flush) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x217b7f62, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd8b946de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2a1b4066, __VMLINUX_SYMBOL_STR(wakeup_source_remove) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8f85dbab, __VMLINUX_SYMBOL_STR(ipa_broadcast_wdi_quota_reach_ind) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xbd705606, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0xab757cde, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x59f78dfd, __VMLINUX_SYMBOL_STR(icnss_smmu_map) },
	{ 0x41e32ea9, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x7d389cb7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x307450e4, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1846bba1, __VMLINUX_SYMBOL_STR(cfg80211_rx_unprot_mlme_mgmt) },
	{ 0xc4a4c8f1, __VMLINUX_SYMBOL_STR(cfg80211_update_owe_info_event) },
	{ 0x9ac5ebb3, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb69b63d9, __VMLINUX_SYMBOL_STR(ipa_uc_dereg_rdyCB) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x41bb0182, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x1a84bfb2, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x65e15901, __VMLINUX_SYMBOL_STR(wakeup_source_prepare) },
	{ 0x434ee802, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xbc69472d, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x7bcb8e07, __VMLINUX_SYMBOL_STR(ipa_release_wdi_mapping) },
	{ 0x7ac54a23, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xcc815aff, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x6730ebc8, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0x90f4df4a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x3b8c8eea, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x2b113f1b, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xdac14565, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x66a39cc7, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x65c2d731, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xc5377ac4, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xc70de58, __VMLINUX_SYMBOL_STR(icnss_enable_irq) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x645dea06, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x65754be0, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc863ae21, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xfe916dc6, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xa45823ec, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0xec772df1, __VMLINUX_SYMBOL_STR(cnss_utils_get_wlan_mac_address) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0xea5d7f00, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x836da01e, __VMLINUX_SYMBOL_STR(ipa_get_hdr) },
	{ 0x9373dc47, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x1afc7f91, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x321645a7, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xf700990b, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0x7edc41cc, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0x15e3f174, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6c9825fb, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe75f913b, __VMLINUX_SYMBOL_STR(__icnss_register_driver) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xfe5d4bb2, __VMLINUX_SYMBOL_STR(sys_tz) },
	{ 0x105a966d, __VMLINUX_SYMBOL_STR(icnss_power_off) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc310b981, __VMLINUX_SYMBOL_STR(strnstr) },
	{ 0xcb6fcf78, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x360ff19f, __VMLINUX_SYMBOL_STR(down) },
	{ 0xe2600f6f, __VMLINUX_SYMBOL_STR(icnss_disable_irq) },
	{ 0xead2fdae, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x257b5e43, __VMLINUX_SYMBOL_STR(icnss_wlan_disable) },
	{ 0xfdca247c, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xdd6985aa, __VMLINUX_SYMBOL_STR(iommu_iova_to_phys) },
	{ 0x99926890, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xac9d2d83, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xb9acebf, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x99c816d5, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xfa965194, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xe166f7a2, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xea623c54, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x6783551f, __VMLINUX_SYMBOL_STR(ipa_disconnect_wdi_pipe) },
	{ 0xc31ae623, __VMLINUX_SYMBOL_STR(icnss_is_rejuvenate) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x292a3e61, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x495457ff, __VMLINUX_SYMBOL_STR(cfg80211_calculate_bitrate) },
	{ 0x86590c9a, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x3d70dc97, __VMLINUX_SYMBOL_STR(icnss_smmu_get_mapping) },
	{ 0x5d808199, __VMLINUX_SYMBOL_STR(ipa_rm_inactivity_timer_release_resource) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xcdbc8aac, __VMLINUX_SYMBOL_STR(ipa_rm_add_dependency) },
	{ 0x6789f741, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x1ce7e8a3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x605c7222, __VMLINUX_SYMBOL_STR(cnss_utils_set_wlan_unsafe_channel) },
	{ 0xc160f574, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x971618d1, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x137881b2, __VMLINUX_SYMBOL_STR(ipa_rm_notify_completion) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x395ddcdc, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x305cec12, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xf5addeaa, __VMLINUX_SYMBOL_STR(icnss_get_ce_id) },
	{ 0xf6770391, __VMLINUX_SYMBOL_STR(mac_pton) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xc2f1b6f8, __VMLINUX_SYMBOL_STR(ipa_rm_inactivity_timer_init) },
	{ 0xf5c4b4ee, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xf8802492, __VMLINUX_SYMBOL_STR(print_stack_trace) },
	{ 0xc9278263, __VMLINUX_SYMBOL_STR(icnss_is_qmi_disable) },
	{ 0x3c698d6b, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4841bdee, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0xaa7c6c01, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x284acb19, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xc352cb02, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0x1e133e4d, __VMLINUX_SYMBOL_STR(param_get_string) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7edc1a0c, __VMLINUX_SYMBOL_STR(cnss_utils_wlan_set_dfs_nol) },
	{ 0x38d3297c, __VMLINUX_SYMBOL_STR(init_dummy_netdev) },
	{ 0xae408efe, __VMLINUX_SYMBOL_STR(icnss_ce_request_irq) },
	{ 0x682a2ea9, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x2f021678, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x16d26234, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4be0cd39, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x6828bd6c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9fef0a8e, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x952664c5, __VMLINUX_SYMBOL_STR(do_exit) },
	{ 0x9e0e703c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8b330e30, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xbc291e91, __VMLINUX_SYMBOL_STR(icnss_get_soc_info) },
	{ 0x2c49519e, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0x1048abba, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0xe3bb3ca, __VMLINUX_SYMBOL_STR(ipa_rm_inactivity_timer_request_resource) },
	{ 0xf9f3d5a7, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x649aa548, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x864aebf1, __VMLINUX_SYMBOL_STR(icnss_set_fw_log_mode) },
	{ 0xee007d9f, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x5373887e, __VMLINUX_SYMBOL_STR(icnss_get_irq) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x3a26ed11, __VMLINUX_SYMBOL_STR(sched_clock) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xbaeeccac, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0xea0e097b, __VMLINUX_SYMBOL_STR(wakeup_source_drop) },
	{ 0x2f5eb6d, __VMLINUX_SYMBOL_STR(icnss_idle_restart) },
	{ 0xf25378f0, __VMLINUX_SYMBOL_STR(cfg80211_is_gratuitous_arp_unsolicited_na) },
	{ 0x35a9ca5f, __VMLINUX_SYMBOL_STR(icnss_power_on) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x36e54585, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x7c21fd96, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xef7dd818, __VMLINUX_SYMBOL_STR(cfg80211_tdls_oper_request) },
	{ 0xc97c7069, __VMLINUX_SYMBOL_STR(ipa_suspend_wdi_pipe) },
	{ 0xde33c838, __VMLINUX_SYMBOL_STR(ipa_deregister_intf) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x71c5e215, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x98cf97ad, __VMLINUX_SYMBOL_STR(cfg80211_ft_event) },
	{ 0xa8be8744, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x661601de, __VMLINUX_SYMBOL_STR(sprint_symbol) },
	{ 0xcc6783b3, __VMLINUX_SYMBOL_STR(ipa_del_hdr) },
	{ 0x9b5bd3f7, __VMLINUX_SYMBOL_STR(icnss_is_fw_down) },
	{ 0x8481f330, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x96c1e49a, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x36110b1, __VMLINUX_SYMBOL_STR(icnss_idle_shutdown) },
	{ 0x3cfae893, __VMLINUX_SYMBOL_STR(_raw_spin_trylock_bh) },
	{ 0xbe018eec, __VMLINUX_SYMBOL_STR(param_set_copystring) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xe8d6b0a6, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0xd31a6c52, __VMLINUX_SYMBOL_STR(ipa_uc_reg_rdyCB) },
	{ 0x59503cf, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x96deec0e, __VMLINUX_SYMBOL_STR(ipa_send_msg) },
	{ 0xf7980964, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x9a52833a, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xc084104e, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x60652d90, __VMLINUX_SYMBOL_STR(ipa_setup_sys_pipe) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1d02765d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xca138548, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x23329eb, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x43b39e, __VMLINUX_SYMBOL_STR(cfg80211_pmksa_candidate_notify) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x356461c8, __VMLINUX_SYMBOL_STR(rtc_time64_to_tm) },
	{ 0x33f0768c, __VMLINUX_SYMBOL_STR(cpufreq_quick_get_max) },
	{ 0x41ebc052, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc447b7b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x13c57cca, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x22b83fbf, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0x1009a79a, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

